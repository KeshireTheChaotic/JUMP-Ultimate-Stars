
void FUN_021529e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int local_20;
  int local_1c;
  int *piStack_18;
  
  piStack_18 = param_4;
  iVar1 = FUN_0203b404();
  iVar1 = FUN_021510f0(*(undefined4 *)(iVar1 + 0x88),0x810000,param_2,0xa0);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = param_3;
  local_20 = param_4[1] << 0xc;
  local_1c = *param_4 << 0xc;
  FUN_0214f218(iVar1,&local_1c,&local_20);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_02152468(iVar1,param_1);
  FUN_0214f48c(param_1,iVar1);
  return;
}

