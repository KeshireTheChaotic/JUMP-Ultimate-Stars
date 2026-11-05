
int FUN_0214f100(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  
  iStack_1c = param_4;
  piVar1 = (int *)FUN_020329ec(0x520000);
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  iVar3 = piVar1[6];
  iVar2 = *(int *)(*(int *)(iVar3 + 4) + 0x50);
  *(int *)(iVar2 + 0xc) = param_3 << 0xc;
  *(int *)(iVar2 + 0x10) = param_4 << 0xc;
  FUN_0214f1cc(iVar2,1);
  local_20 = param_2 << 0xc;
  piVar1 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_20);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),param_1,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_020282f4(*(undefined4 *)(iVar3 + 4));
  return iVar3;
}

