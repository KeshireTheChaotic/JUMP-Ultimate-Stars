
void FUN_0214eac0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_0207382c();
  if (iVar2 == 0) {
    return;
  }
  cVar1 = *(char *)((int)piVar3 + 0x19);
  if (cVar1 == '\0') {
    FUN_0215beb4(piVar3[3]);
  }
  else if (cVar1 == '\x01') {
    FUN_0215ed2c(piVar3[4]);
  }
  else if (cVar1 == '\x02') {
    FUN_0215fe08(piVar3[5]);
  }
  *(undefined1 *)((int)piVar3 + 0x19) = *(undefined1 *)((int)piVar3 + 0x1a);
  switch(*(undefined1 *)((int)piVar3 + 0x1a)) {
  case 0:
    FUN_0215b8b8(piVar3[3]);
    break;
  case 1:
    FUN_0215e2bc(piVar3[4]);
    break;
  case 2:
    ALNodeImp::Create(piVar3[5]);
    break;
  case 3:
    FUN_02041f7c(DAT_020a0f64,0);
    FUN_020735e4();
    if (piVar3[3] != 0) {
      FUN_0215b760();
    }
    if (piVar3[4] != 0) {
      FUN_0215e1fc();
    }
    if (piVar3[5] != 0) {
      FUN_0215f68c();
    }
    if ((int *)piVar3[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[2] + 0xc))();
    }
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_02093c04 = DAT_02093c04 + 1;
    (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
    (**(code **)(*(int *)piVar3[1] + 8))();
    FUN_0201b244(piVar3);
    return;
  }
  FUN_02073ebc(2,1);
  FUN_02028330(*(undefined4 *)(piVar3[1] + 4));
  FUN_02028384(*(undefined4 *)(piVar3[1] + 4),FUN_0214e9a8);
  return;
}

