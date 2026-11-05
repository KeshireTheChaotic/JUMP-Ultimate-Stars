
void FUN_02069694(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_020517fc(param_2,0,0xc);
  iVar1 = FUN_020698e4(param_1);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    *param_2 = *(undefined4 *)(param_1 + 4);
    param_2[1] = uVar2;
    param_2[2] = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  FUN_02069c64(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_02069be0(param_2,3);
  return;
}

