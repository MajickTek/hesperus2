@echo off
cd ..
java MapEditor.BSP.TreeUtil
echo ---
java MapEditor.Commands.Command
echo ---
java MapEditor.CSG.CSGUtil
echo ---
java MapEditor.Geom.Planar.GeomUtil
echo ---
java MapEditor.Geom.Splines.CubicBSpline
echo ---
java MapEditor.Geom.Splines.SplineUtil
echo ---
java MapEditor.Math.MathUtil
echo ---
java MapEditor.Math.Matrices.Matrix
echo ---
java MapEditor.Math.Vectors.Vector3d
echo ---
java MapEditor.Math.Vectors.VectorUtil
echo ---
java MapEditor.Misc.MiscUtil
echo ---
java MapEditor.Textures.TexturePlane
cd MapEditor