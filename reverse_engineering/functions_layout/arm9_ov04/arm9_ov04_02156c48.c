
void FUN_02156c48(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_021559ec(*(undefined4 *)(iVar3 + 0x1c));
  if (iVar2 == 0) {
    return;
  }
  FUN_02156990(iVar3);
  FUN_02156b84(iVar3);
  cVar1 = *(char *)(iVar3 + 0x14);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_0207342c(0x7c,0);
    }
    else if (cVar1 == '\x02') {
      FUN_0207342c(0x7c,1);
    }
  }
  FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),1,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 4) + 4) + 0x68) + 0x6c))();
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02156cfc);
  *(undefined1 *)(iVar3 + 0x17) = 0;
  return;
}

