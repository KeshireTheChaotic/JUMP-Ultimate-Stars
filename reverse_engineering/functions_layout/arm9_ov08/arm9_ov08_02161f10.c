
void FUN_02161f10(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = DAT_0216e7f0;
  puVar4 = (undefined1 *)(DAT_0216e7f0 + param_1 * 0x100);
  puVar6 = (undefined1 *)(DAT_0216e7f0 + 0x400);
  iVar5 = 0xf0;
  puVar3 = puVar4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(char *)(iVar2 + 0x4f4) = (char)param_1;
  iVar2 = FUN_020024cc(puVar4 + 0xc0,&DAT_0216ad88,4);
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_0216e7f0 + 0x4f5) = 1;
  }
  else {
    *(undefined1 *)(DAT_0216e7f0 + 0x4f5) = 0;
  }
  iVar2 = FUN_020024cc(puVar4 + 200,&DAT_0216ad88,4);
  if ((iVar2 == 0) && (iVar2 = FUN_020024cc(puVar4 + 0xcc,&DAT_0216ad88,4), iVar2 == 0)) {
    *(undefined1 *)(DAT_0216e7f0 + 0x4f6) = 1;
  }
  else {
    *(undefined1 *)(DAT_0216e7f0 + 0x4f6) = 0;
  }
  FUN_0206a2c0(puVar4[0xd0],DAT_0216e7f0 + 0x4f0);
  return;
}

