
void FUN_02154048(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = piVar1[4];
  if ((*(uint *)(iVar2 + 0x58) & 1 << (piVar1[0x49] & 0xffU)) == 0) {
    return;
  }
  (**(code **)(*piVar1 + 0xd8))();
  *(uint *)(iVar2 + 0x58) =
       *(uint *)(iVar2 + 0x58) & ~(1 << (*(uint *)(*(int *)(param_1 + 4) + 0x124) & 0xff));
  return;
}

