
int FUN_0215f178(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0215f0f4();
    DAT_020a0dd0 = *(undefined4 *)(param_1 + 4);
    FUN_020329ec(param_2);
    iVar1 = FUN_0214d37c();
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
    local_18 = param_6 << 0xc;
    FUN_0214e6c0(iVar1,&local_18);
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2 + param_3,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    local_20 = param_5 << 0xc;
    local_1c = param_4 << 0xc;
    FUN_021511c8(iVar1,&local_1c,&local_20);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
    FUN_0214f834();
  }
  return iVar1;
}

