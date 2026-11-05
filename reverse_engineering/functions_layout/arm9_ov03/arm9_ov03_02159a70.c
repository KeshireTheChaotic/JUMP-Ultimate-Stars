
void FUN_02159a70(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  cVar1 = *(char *)(iVar4 + 2);
  if (cVar1 == -1) {
    iVar3 = 4;
  }
  else if (cVar1 == -2) {
    iVar3 = 4;
  }
  else {
    iVar3 = 5;
  }
  if ((iVar3 == *(int *)(*(int *)(param_1 + 4) + 0x124)) &&
     (iVar4 = *(int *)(iVar4 + 0x2c), iVar4 != 0)) {
    piVar2 = *(int **)(iVar4 + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (*(int *)(iVar4 + 0x124) == 3) {
    func_0x021b6214(iVar4,1);
    return;
  }
  func_0x021b6214(iVar4,0);
  return;
}

