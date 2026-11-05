
void FUN_0206c5b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  
  (**(code **)(**(int **)(PTR_DAT_0206c644 + 8) + 0xc))();
  puVar1 = PTR_DAT_0206c644;
  iVar4 = 0;
  *(undefined4 *)(PTR_DAT_0206c644 + 8) = 0;
  *puVar1 = 1;
  puVar2 = PTR_FUN_0206c64c;
  piVar3 = (int *)PTR_DAT_0206c648;
  *(undefined4 *)(puVar1 + 4) = 0;
  do {
    if (*piVar3 != 0) {
      FUN_02034d7c();
    }
    if ((int *)piVar3[1] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[1] + 0xc))();
    }
    FUN_02010824(puVar2,piVar3[2]);
    (**(code **)(*(int *)piVar3[2] + 8))();
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar4 < 4);
  return;
}

