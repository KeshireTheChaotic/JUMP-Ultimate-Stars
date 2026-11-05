
void FUN_0218f398(int param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_020aab78 + 0xa4);
  if (iVar2 != 0) {
    if (param_3 == 0x7f000001) {
      param_3 = DAT_021a8538;
    }
    *(undefined2 *)(iVar2 + 0x1a) = param_2;
    *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(iVar2 + 0x1a);
    *(int *)(iVar2 + 0x20) = param_3;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x20);
    if (param_1 == 0) {
      uVar1 = FUN_0218f448();
      *(undefined2 *)(iVar2 + 10) = uVar1;
      return;
    }
    *(short *)(iVar2 + 10) = (short)param_1;
  }
  return;
}

