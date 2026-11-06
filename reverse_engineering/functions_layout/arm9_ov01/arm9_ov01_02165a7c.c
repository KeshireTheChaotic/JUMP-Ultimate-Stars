
void FUN_02165a7c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar8 = OS_GetTick();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  uVar1 = (uint)uVar8;
  if ((*(int *)(iVar6 + 0x54) != 0) && (iVar2 = FUN_020869b8(), iVar2 != 0)) {
    *(undefined1 *)(iVar6 + 0x70) = 0;
  }
  if ((*(int *)(iVar6 + 0x58) == 0) || (iVar2 = FUN_0216964c(), iVar2 == 0)) {
    if (*(char *)(iVar6 + 0x71) != '\0') {
      *(undefined1 *)(iVar6 + 0x71) = 0;
      uVar5 = *(uint *)(iVar6 + 0x5c);
      uVar4 = uVar1 - *(uint *)(iVar6 + 100);
      *(uint *)(iVar6 + 0x5c) = uVar5 + uVar4;
      *(uint *)(iVar6 + 0x60) =
           *(int *)(iVar6 + 0x60) +
           (iVar3 - (*(int *)(iVar6 + 0x68) + (uint)(uVar1 < *(uint *)(iVar6 + 100)))) +
           (uint)CARRY4(uVar5,uVar4);
    }
  }
  else if (*(char *)(iVar6 + 0x71) == '\0') {
    *(undefined1 *)(iVar6 + 0x71) = 1;
    *(undefined8 *)(iVar6 + 100) = uVar8;
  }
  FUN_021657f0(iVar6);
  if (*(char *)(iVar6 + 0x70) == '\0') {
    return;
  }
  if (*(char *)(iVar6 + 0x71) != '\0') {
    return;
  }
  iVar2 = *(int *)(iVar6 + 0x60) + (uint)(uVar1 < *(uint *)(iVar6 + 0x5c));
  bVar7 = iVar3 == iVar2;
  if (iVar3 == iVar2) {
    bVar7 = uVar1 - *(uint *)(iVar6 + 0x5c) <=
            (uint)((ulonglong)*(byte *)(iVar6 + 0x84) * 0x1ff6210 >> 6);
  }
  if (bVar7) {
    return;
  }
  if (*(code **)(iVar6 + 0x38) != (code *)0x0) {
    (**(code **)(iVar6 + 0x38))(*(undefined4 *)(iVar6 + 0x50));
  }
  *(undefined1 *)(iVar6 + 0x70) = 0;
  return;
}

