
void FUN_02035fc0(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (DAT_020a0d94 < 8) {
    for (uVar3 = 0; uVar3 < DAT_020a0d94; uVar3 = uVar3 + 1) {
      if ((int *)(&DAT_020a19c4)[uVar3] != (int *)0x0) {
        (**(code **)(*(int *)(&DAT_020a19c4)[uVar3] + 4))();
      }
    }
    DAT_020a0d94 = 0;
    return;
  }
  piVar1 = DAT_020a1d98;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[5];
    if ((*(byte *)(piVar1 + 10) & 1) != 0 && piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = piVar2;
  }
  return;
}

