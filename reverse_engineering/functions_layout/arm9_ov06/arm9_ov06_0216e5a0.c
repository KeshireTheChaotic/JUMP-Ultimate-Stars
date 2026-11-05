
void FUN_0216e5a0(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(ushort *)(param_1 + 0x26) & 0x200) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
    iVar4 = FUN_0206c7fc(*(int *)(param_1 + 0x1c),*(int *)(iVar4 + 0xc) >> 8,
                         *(int *)(iVar4 + 0x10) >> 8,0);
    iVar3 = *(int *)(param_2 + 8);
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = *(undefined1 *)(*(int *)(*(int *)(iVar3 + 4) + 100) + 0x48);
    }
    piVar1 = *(int **)(*(int *)(iVar4 + 4) + 100);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    (**(code **)(*piVar1 + 0x5c))(piVar1,uVar2);
    (**(code **)(**(int **)(iVar4 + 4) + 0x94))
              (*(int **)(iVar4 + 4),*(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffffff);
  }
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(uint *)(iVar4 + 8);
  if (((uVar5 & 0x80) != 0) && ((*(ushort *)(param_1 + 0x26) & 0x80) != 0)) {
    FUN_0216ee44(param_1,param_2,(int)*(char *)(iVar4 + 0x1d));
    return;
  }
  if (((uVar5 & 0x40000) != 0) && ((*(uint *)(*(int *)(param_2 + 0x10) + 0x40) & 0x100000) != 0)) {
    FUN_0216ee44(param_1,param_2,(int)*(char *)(iVar4 + 0x1d));
    return;
  }
  if (((uVar5 & 0x100000) != 0) && ((*(uint *)(*(int *)(param_2 + 0x10) + 0x78) & 2) != 0)) {
    FUN_0216ee44(param_1,param_2,(int)*(char *)(iVar4 + 0x1d));
    return;
  }
  if ((uVar5 & 0x40) == 0) {
    return;
  }
  FUN_0216ee44(param_1,param_2,(int)*(char *)(iVar4 + 0x1c));
  return;
}

