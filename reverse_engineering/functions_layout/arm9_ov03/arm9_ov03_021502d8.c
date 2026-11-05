
void FUN_021502d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 3) {
    FUN_0214fb7c(*(undefined4 *)(param_1 + 4));
    iVar1 = FUN_0214fde8();
    uVar2 = uRam0215d4a4;
    if (iVar1 != 0) {
      uVar2 = 0x30;
    }
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_0215d498 + param_2 * 4);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  func_0x021bd730(*(int *)(param_1 + 0x68),uVar2,0);
  return;
}

