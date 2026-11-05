
int FUN_021af39c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    FUN_0200f69c((int)&uStack_10 + 1,1);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - iVar1;
    FUN_0201b244(*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    FUN_0200f69c(&uStack_10,1);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - iVar1;
    FUN_0201b244(*(undefined4 *)(param_1 + 0x78));
  }
  FUN_020155a0(param_1);
  return param_1;
}

