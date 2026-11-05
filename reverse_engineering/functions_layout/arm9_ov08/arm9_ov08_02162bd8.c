
int FUN_02162bd8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = FUN_02054b44();
  iVar3 = DAT_0216e800;
  uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
  bVar1 = false;
  uVar7 = *(uint *)(DAT_0216e800 + 0x1b78) + 0x17f898;
  uVar8 = *(int *)(DAT_0216e800 + 0x1b7c) + (uint)(0xffe80767 < *(uint *)(DAT_0216e800 + 0x1b78));
  iVar4 = (uint)uVar11 - uVar7;
  if (uVar8 < uVar6 || uVar6 - uVar8 < (uint)(uVar7 <= (uint)uVar11)) {
    bVar2 = false;
    iVar10 = 0;
    iVar9 = DAT_0216e800 + 0x1300;
    iVar4 = DAT_0216e800;
    do {
      iVar5 = FUN_020024cc(iVar9,&DAT_0216adc0,6);
      if (iVar5 != 0) {
        if (*(char *)(iVar4 + 0x1306) == '\0') {
          bVar1 = true;
        }
        else {
          bVar2 = true;
        }
      }
      iVar9 = iVar9 + 7;
      iVar4 = iVar4 + 7;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    if ((bVar2) && (bVar1)) {
      if (*(code **)(iVar3 + 0x1370) != (code *)0x0) {
        (**(code **)(iVar3 + 0x1370))(2);
      }
    }
    else if (bVar2) {
      if (*(code **)(iVar3 + 0x1370) != (code *)0x0) {
        (**(code **)(iVar3 + 0x1370))(1);
      }
    }
    else if ((!bVar1) && (*(code **)(iVar3 + 0x1370) != (code *)0x0)) {
      (**(code **)(iVar3 + 0x1370))(0);
    }
    *(undefined4 *)(DAT_0216e800 + 0x1b80) = 0;
    *(undefined1 *)(DAT_0216e800 + 0x1b86) = 1;
    iVar4 = FUN_021677a0(0,param_1);
  }
  return iVar4;
}

