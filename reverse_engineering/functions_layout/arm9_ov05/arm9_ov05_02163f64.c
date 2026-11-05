
char FUN_02163f64(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  bVar4 = true;
  cVar1 = '\0';
  for (iVar5 = 1; iVar5 < param_4; iVar5 = iVar5 + 1) {
    iVar6 = iVar6 * 10;
  }
  for (iVar5 = 0; iVar5 < param_4; iVar5 = iVar5 + 1) {
    iVar2 = FUN_0200d338(param_1,iVar6);
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + iVar5 * 4) + 4),param_3 + iVar2,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_2 + iVar5 * 4) + 4) + 0x68) + 0x6c))();
    if ((iVar2 == 0) && (bVar4)) {
      piVar3 = *(int **)(*(int *)(param_2 + iVar5 * 4) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    }
    else {
      piVar3 = *(int **)(*(int *)(param_2 + iVar5 * 4) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      bVar4 = false;
      cVar1 = cVar1 + '\x01';
    }
    param_1 = param_1 - iVar2 * iVar6;
    iVar6 = FUN_0200d338(iVar6,10);
  }
  piVar3 = *(int **)(*(int *)(param_2 + (param_4 + -1) * 4) + 4);
  if (((char)*(byte *)(piVar3[0x19] + 0x10) < '\0') &&
     ((*(byte *)(piVar3[0x19] + 0x10) & 3) >> 1 != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    cVar1 = cVar1 + '\x01';
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  }
  return cVar1;
}

