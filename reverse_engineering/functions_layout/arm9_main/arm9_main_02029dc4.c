
void FUN_02029dc4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(ushort *)(param_1 + 8) <= uVar2) {
LAB_02029df4:
      uVar2 = (uint)*(ushort *)(param_1 + 8);
      do {
        uVar1 = uVar2;
        uVar2 = uVar1 - 1;
        if ((int)uVar2 < 0) {
          return;
        }
      } while (*(short *)(*(int *)(param_1 + 0x10) + uVar2 * 2) == 0);
      *(short *)(param_1 + 0xc) = (short)uVar1;
      return;
    }
    if (*(short *)(*(int *)(param_1 + 0x10) + uVar2 * 2) != 0) {
      *(short *)(param_1 + 10) = (short)uVar2;
      goto LAB_02029df4;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

