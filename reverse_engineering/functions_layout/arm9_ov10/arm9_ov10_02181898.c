
int FUN_02181898(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 4));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_020012d8(*(undefined4 *)(param_1 + 4),iVar4);
      uVar5 = *puVar2;
      iVar3 = FUN_0217fa28(uVar5);
      if ((param_2 == iVar3) && (iVar3 = FUN_0217fa08(uVar5), param_3 == iVar3)) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return -1;
}

