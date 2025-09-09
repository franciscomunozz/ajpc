const db = require('../config/db');

exports.getAllPublicaciones = (req, res) => {
    const query = 'SELECT * FROM publicaciones';
    db.query(query, (err, results) => {
        if(err) return res.status(500).json({error: 'Error al obtener publicaciones'});
        res.json(results);
    });
};


exports.getMisPublicaciones = (req, res) => {
    const userId = req.user.id;
    const query = 'SELECT * FROM publicaciones WHERE usuario_id = ?';
    db.query(query, [userId], (err, results) => {
        if(err) return res.status(500).json({error:'Error al obtener tus publicaciones'});
        res.json(results);
    });
};

exports.crearPublicacion = (req, res) => {
    const {titulo, descripcion, precio, imagen_url, ubicacion} = req.body;
    const usuario_id = req.user.id;
    const query = "INSERT INTO publicaciones (titulo, descripcion, precio, imagen_url, ubicacion, usuario_id, fecha_creacion) VALUES (?, ?, ?, ?, ?, ?, NOW())";
    db.query(query, [titulo, descripcion, precio, imagen_url, ubicacion, usuario_id], (err, results) => {
        if(err) {
            console.error('Error al crear la publicación:', err);  // <--- agregar este console.log para ver el error en consola
            return res.status(500).json({error: 'Error al crear la publicación', detalle: err.message});
        }
        res.status(201).json({message: 'Publicación creada con éxito', id: results.insertId});
    });
};


exports.editarPublicacion = (req, res) => {
    const {id}
    const usuario_id = req.user.id;
    const query = "UPDATE publicaciones SET titulo = ?, descripcion = ?, precio = ?, imagen_url = ?, ubicacion = ? WHERE id = ? AND usuario_id = ?";
    db.query(query, [titulo, descripcion, precio, imagen_url, ubicacion, id, usuario_id], (err, results) => {
        if (err) {
            console.error('Error al actualizar la publicación:', err);
            return res.status(500).json({ error: 'Error al actualizar la publicación' });
        }
        if (results.affectedRows === 0) {
            return res.status(404).json({ error: 'Publicación no encontrada o no tienes permiso' });
        }
        res.json({ message: 'Publicación actualizada con éxito' });
    });
};

exports.verPublicacion = (req, res) => {
    const { id } = req.params;
    const usuario_id = req.user?.id; // si usas authMiddleware para obtener usuario

    const query = "SELECT * FROM publicaciones WHERE id = ?";
    db.query(query, [id], (err, results) => {
        if (err) return res.status(500).json({ error: 'Error al intentar ver la publicación' });
        if (results.length === 0) return res.status(404).json({ error: 'Publicación no encontrada' });

        const publicacion = results[0];
        
        // Si la publicación es privada, y el usuario no es el dueño, bloquea el acceso:
        if (publicacion.usuario_id !== usuario_id) {
            return res.status(403).json({ error: 'No tienes permiso para ver esta publicación' });
        }

        res.json(publicacion);
    });
};



exports.eliminarPublicacion = (req, res) => {
    const {id} = req.params;
    const usuario_id = req.user.id;

    const query = "DELETE FROM publicaciones WHERE id = ? AND usuario_id = ?";
    db.query(query, [id, usuario_id], (err, results) => {
        if(err) return res.status(500).json({error: 'Error al eliminar la publicación'});
        if(results.affectedRows === 0) return res.status(404).json({error:'Publicación no encontrada o no tienes permiso'});
        res.json({message:'Publicación eliminada con éxito'});
    });
};