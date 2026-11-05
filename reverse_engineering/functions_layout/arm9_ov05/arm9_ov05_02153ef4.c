
void FUN_02153ef4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  FUN_02153ea0(param_1,(int)*(char *)(param_1 + 0x49e),0xb,param_4,param_4);
  cVar1 = FUN_0200d12c((int)*(char *)(param_1 + 0x49e),0xb);
  *(char *)(param_1 + 0x46d) = cVar1 * '\x18' + *(char *)(param_1 + 0x46d);
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 0x49e); iVar3 = iVar3 + 1) {
    piVar2 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0x1a4) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  }
  return;
}

