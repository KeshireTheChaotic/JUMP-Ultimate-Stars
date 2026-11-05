
int FUN_021c5f88(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)ALFont::Create();
  iVar2 = (*DAT_021d52a8)();
  (**(code **)(**(int **)(iVar2 + 100) + 0x60))(*(int **)(iVar2 + 100),piVar1);
  (**(code **)(*piVar1 + 0xc))();
  return iVar2;
}

