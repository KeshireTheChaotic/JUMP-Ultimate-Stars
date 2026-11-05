
void FUN_02031eac(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  DAT_020a0f8c = param_1;
  FUN_02019d1c();
  DAT_020a0f70 = *(int **)(*(int *)(param_1 + 0x94) + 8);
  piVar1 = (int *)DAT_020a0f70[2];
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    if ((DAT_020a0f70[0xe] == 0) ||
       ((*(uint *)(param_1 + 0x4c) & *(uint *)(DAT_020a0f70[0xe] + 0x3c)) != 0)) {
      (**(code **)(*DAT_020a0f70 + 0x1c))();
    }
    DAT_020a0f70 = piVar2;
    piVar1 = (int *)piVar2[2];
  }
  DAT_020a0f70 = (int *)0x0;
  return;
}

