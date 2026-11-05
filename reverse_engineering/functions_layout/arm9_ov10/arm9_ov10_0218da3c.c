
undefined4 FUN_0218da3c(int param_1,ushort param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined1 *)(param_3 + 1) = 2;
  *(ushort *)(param_3 + 2) = param_2 >> 8 | param_2 << 8;
  if (param_1 == 0) {
    *(undefined4 *)(param_3 + 4) = 0;
  }
  else {
    uVar1 = FUN_020019ec();
    *(undefined4 *)(param_3 + 4) = uVar1;
  }
  if ((*(int *)(param_3 + 4) == -1) &&
     (iVar2 = FUN_02004c2c(param_1,s_255_255_255_255_021a68fc), iVar2 != 0)) {
    iVar3 = FUN_02193970(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)**(undefined4 **)(iVar3 + 0xc);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar3;
  }
  return 1;
}

