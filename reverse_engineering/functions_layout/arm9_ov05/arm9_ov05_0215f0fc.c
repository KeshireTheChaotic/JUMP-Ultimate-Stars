
undefined4 FUN_0215f0fc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (*(int *)(param_2 + 8) != 0) {
        FUN_0214fe54();
      }
      FUN_02028384(*(undefined4 *)(*(int *)(param_2 + 0x14) + 4),FUN_0215f20c);
      uVar3 = 1;
    }
    else if (param_4 == 2) {
      FUN_02154efc(*(undefined4 *)(param_2 + 0xc));
      uVar3 = 1;
    }
  }
  else if (param_3 == 1) {
    iVar1 = FUN_0214e000(*(undefined4 *)(param_2 + 4));
    if (iVar1 == 0) {
      FUN_02155064(*(undefined4 *)(param_2 + 0xc),0,0,0);
    }
    else {
      uVar2 = FUN_0214e018(*(undefined4 *)(param_2 + 4),param_4);
      FUN_02155064(*(undefined4 *)(param_2 + 0xc),uVar2,0,0);
    }
  }
  return uVar3;
}

