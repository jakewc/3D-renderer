_look_ep(veS3^t myq,�vac3_t(tarcet.!tEc3_t"u0) {4 $ /- Colq�5a dhe grw�zd z), r)ght  x()!and�up((y)`vecto23
  ( vYctz = va3_{ub(targu4,(dye)J  $ fec3nnrmqlize(�~);
"(  |ec3^t pp<`Vec;[CrosS(Tp, x+;
� ! veC3_ngRmalize(&x�; `  vec3_t { = vec3_croSr({,�x);

` b!// t$p.x   x>y   x�r��-dkthx(e�m9 |`  0//�|�{,8a" �.y   y&z (-Dot(},eYe	 |�! � // |"z.x `"x.y   z.s`!-dot�z,e9e) |    //$|   0 ��(%0`  0 0       ` 0  1 |
   �Iat5_t%viEw_matrIx =!{k
`       { p.x,`s>y x.z,!-vec3_do4h-!eye) },
    (   { y�x< y.y, ynz, �vec3_dmthz. eYe�"�,
$  b"   { zn8, �.y( x*, /vuc3Odnt(z, eye) }(
a$    � {  $0,` "0,  40��     �0;` !    1�u
  ! }u;
p  `Sdturn v)eOmat�iX;
}
         �        �   �         �$   T              @@          @               @                       �             �@             P                              ��A    @          @ @   D �      �@    A            �                          �@        ��     A �                  �        t_camera_lookat_target(void){
    vec3_t target = {0, 0, 1};
    mat4_t camera_yaw_rotation = mat4_make_rotation_y(get_camera_yaw());
    mat4_t camera_pitch_rotation = mat4_make_rotation_x(get_camera_pitch());

    mat4_t camera_rotation = mat4_identity();
    camera_rotation = mat4_mul_mat4(camera_pitch_rotation, camera_rotation);
    camera_rotation = mat4_mul_mat4(camera_yaw_rotation, camera_rotation);

    vec4_t camera_direction = mat4_mul_vec4(camera_rotation, vec4_from_vec3(target));
    camera.direction = vec3_from_vec4(camera_direction);

    // Offset the camera position in the direction where the camera is pointing at
    target = vec3_add(get_camera_position(), get_camera_direction());
    return target;
}
                                                                                                                                                                                                                                                                                                        ��    ��d ��������̶g�(� ���3����VE�0�f�����z[1�@@Eq��������pPyݍBN�@��O6[`��������e�Jk�Mip�Sb��^v�a���Q���kA�����PU�]ΐ),��S\h�o��ڠ��C'QR�q8��I���H�SVɞaE9
�$��[�+jg�Q�U�MIj,й	��F��A���}��P�����1�8gWy��SP�4&!I޸��kI IՋ�/G^{1��1*�:�y�fw�m�O�< ��o; O��Ď�܍80��]���l�zѸo@a�1Q��Ѳ��z(�Pz����H��*fX?0��`��-w��y��˱[jYQp��j�v���Cf�qU�Y���?�E�>��������gb���}�_<�����6��q�=Z' ɵ�V�I��a8P���X�1I��"7�Q�I��;��кT��m	�A����,�Y�1x}0�7�1�
Z�����֣F�s�
!��#��~� ��    ��d ��k����F�g@.� �����D�V���0�S����{;ݎ)~D@B|�?����Gq�
�P;6�ȆO�y-�!�E`"�r�iN����UB^p7��} �=�?���>]g���^��q���Ҍ��e���[@���\��b�"��
ʐ�bq��{����W�A���a#�׹�����D �Q����F��{��㎩AAwV)�������1[��EY��W5�l