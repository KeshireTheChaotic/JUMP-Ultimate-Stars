
undefined4 FUN_0216422c(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_0216e828 + 0x40) != 1) {
    FUN_02055684();
  }
  *(undefined4 *)(DAT_0216e828 + 0x12a4) = 0x180;
  *(undefined4 *)(DAT_0216e828 + 0x12a0) = 0xe0;
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s_recv_buffer_size____d_0216bfe4,
                    *(undefined4 *)(DAT_0216e828 + 0x12a4));
  }
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s_send_buffer_size____d_0216bffc,
                    *(undefined4 *)(DAT_0216e828 + 0x12a0));
  }
  *(int *)(DAT_0216e828 + 0x44) = param_1;
  FUN_02164cb8(3);
  *(undefined2 *)(DAT_0216e828 + 0xc) = param_2;
  *(undefined2 *)(DAT_0216e828 + 0x32) = param_3;
  uVar1 = FUN_02058750();
  *(undefined2 *)(DAT_0216e828 + 0x18) = uVar1;
  *(undefined2 *)(DAT_0216e828 + 0x34) = 0xd0;
  *(undefined2 *)(DAT_0216e828 + 0x36) = 0x44;
  *(undefined2 *)(DAT_0216e828 + 0x10) = 2;
  *(undefined2 *)(DAT_0216e828 + 0x16) = 0;
  *(undefined2 *)(DAT_0216e828 + 0x12) = 0;
  *(undefined2 *)(DAT_0216e828 + 0xe) = 1;
  *(ushort *)(DAT_0216e828 + 0x14) = (ushort)(param_1 == 2);
  if (((param_1 == 0) || (param_1 == 2)) || (param_1 == 4)) {
    uVar2 = FUN_02164c6c();
    return uVar2;
  }
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,s_unknown_connect_mode__d_0216c014,param_1);
  }
  return 0;
}

