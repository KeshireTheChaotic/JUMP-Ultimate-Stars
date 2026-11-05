
/* JUS-SDK NitroMain [structural] crt0 tail: ldr r1,=X ; ldr lr,=HW_RESET_VECTOR ; bx r1 */

void NitroMain(void)

{
  undefined4 in_r3;
  undefined4 local_1e08 [1919];
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_0206dd74();
  DAT_020a1098 = &local_c;
  local_1e08[0] = 0xdddddddd;
  DAT_020a0f90 = &local_c;
  local_c = 0xbbbbbbbb;
  DAT_020a0f94 = local_1e08;
  FUN_020430c4();
  FUN_0206ddb4();
  FUN_02055684();
  return;
}

