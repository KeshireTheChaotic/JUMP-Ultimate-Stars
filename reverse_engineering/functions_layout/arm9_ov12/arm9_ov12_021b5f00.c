
bool FUN_021b5f00(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_1[0x24];
  bVar4 = uVar3 != (uVar3 & ~param_2);
  if (bVar4) {
    if ((((param_2 & 1) == 1) || ((param_2 & 2) == 2)) && ((param_1[0x24] & 4U) == 4)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    param_1[0x24] = param_1[0x24] & ~param_2;
    if (param_1[0x3a] != 0) {
      uVar1 = FUN_021acab4(param_1);
      (*(code *)param_1[0x3a])(uVar1,param_2);
    }
    for (uVar3 = 0; uVar3 < (uint)param_1[0x41]; uVar3 = uVar3 + 1) {
      if (param_2 == *(uint *)(param_1[0x40] + uVar3 * 8)) {
        FUN_021acab4(param_1);
        (**(code **)(param_1[0x40] + uVar3 * 8 + 4))();
      }
    }
    if (param_1[0x22] != 0) {
      ALObjectImp::PostMessage(param_1,0x80011001,param_2);
    }
    if ((((param_2 & 1) == 1) || ((param_2 & 2) == 2)) && ((param_1[0x24] & 3U) != 3)) {
      (**(code **)(*param_1 + 0x140))();
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x154))();
    if ((piVar2 != (int *)0x0) && ((int *)piVar2[0x25] == param_1)) {
      (**(code **)(*piVar2 + 0x130))();
    }
    if ((int *)param_1[0x36] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x36] + 300))();
    }
    if ((*(char *)((int)param_1 + 0xad) != '\0') && ((param_2 & 0x20) == 0x20)) {
      FUN_02027560(param_1);
    }
  }
  return bVar4;
}

