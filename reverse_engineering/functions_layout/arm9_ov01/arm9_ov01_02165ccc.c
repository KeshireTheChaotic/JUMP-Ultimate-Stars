
void FUN_02165ccc(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_02071f08();
  uVar2 = FUN_02071f10((&DAT_020afeb4)[DAT_020afe98]);
  FUN_020884e4(param_2,uVar1,uVar2);
  uVar1 = (**(code **)(*param_2 + 8))();
  switch(uVar1) {
  case 0x70000004:
    iVar5 = (**(code **)*param_2)();
    if (iVar5 == 1) {
      uVar3 = (**(code **)(*param_2 + 4))();
      if (uVar3 < 4) {
        if (*(char *)(iVar7 + 0x85) != '\x02') {
          iVar5 = (**(code **)(*param_2 + 4))();
          iVar4 = (**(code **)(*param_2 + 4))();
          FUN_02023894(*(undefined4 *)(*(int *)(iVar7 + iVar4 * 4 + 0x10) + 4),iVar5 + 0x88601b,0);
        }
        if (*(code **)(iVar7 + 0x44) != (code *)0x0) {
          (**(code **)(iVar7 + 0x44))(*(undefined4 *)(iVar7 + 0x50));
        }
      }
    }
    else if (iVar5 == 2) {
      if (*(code **)(iVar7 + 0x3c) != (code *)0x0) {
        (**(code **)(iVar7 + 0x3c))(*(undefined4 *)(iVar7 + 0x50));
      }
    }
    else if ((iVar5 == 4) && (*(code **)(iVar7 + 0x40) != (code *)0x0)) {
      (**(code **)(iVar7 + 0x40))(*(undefined4 *)(iVar7 + 0x50));
    }
    break;
  case 0x70000005:
    break;
  case 0x70000006:
    if (*(code **)(iVar7 + 0x40) == (code *)0x0) {
      return;
    }
    (**(code **)(iVar7 + 0x40))(*(undefined4 *)(iVar7 + 0x50));
    return;
  case 0x70000007:
    if (*(code **)(iVar7 + 0x4c) == (code *)0x0) {
      return;
    }
    (**(code **)(iVar7 + 0x4c))(*(undefined4 *)(iVar7 + 0x50));
    return;
  default:
    return;
  }
  iVar5 = (**(code **)*param_2)();
  if (iVar5 != 0x123) {
    return;
  }
  puVar6 = (ushort *)(**(code **)(*param_2 + 4))();
  if (3 < *puVar6) {
    return;
  }
  if (*(code **)(iVar7 + 0x48) != (code *)0x0) {
    (**(code **)(iVar7 + 0x48))(*(undefined4 *)(iVar7 + 0x50));
  }
  *(undefined1 *)(iVar7 + 0x86) = 1;
  return;
}

