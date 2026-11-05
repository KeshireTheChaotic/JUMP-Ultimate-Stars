
bool FUN_021b59a4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  bVar9 = param_1[0x24] != (param_1[0x24] | param_2);
  if (bVar9) {
    uStack_18 = param_4;
    if (((param_2 & 8) == 8) && ((param_1[0x24] & 1U) == 1)) {
      (**(code **)(*param_1 + 0x14c))();
      piVar1 = (int *)(**(code **)(*(int *)param_1[0x27] + 0x18c))((int *)param_1[0x27],param_1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x148))(piVar1,1);
      }
    }
    uVar8 = param_2 & 1;
    if ((((uVar8 == 1) && ((int *)param_1[0x27] != (int *)0x0)) &&
        (piVar1 = (int *)(**(code **)(*(int *)param_1[0x27] + 0x17c))(), piVar1 != (int *)0x0)) &&
       (piVar1 != param_1)) {
      (**(code **)(*piVar1 + 0x14c))(piVar1,1);
    }
    uVar2 = param_2 & 4;
    if ((uVar2 == 4) && ((param_1[0x24] & 0x10U) == 0x10)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    if (((param_2 & 0x10) == 0x10) && ((param_1[0x24] & 0x20U) == 0x20)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    uVar3 = param_2 & 0x20;
    if ((uVar3 == 0x20) && ((param_1[0x24] & 0x10U) == 0x10)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    if ((uVar3 == 0x20) && ((param_1[0x24] & 4U) == 4)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    if (((param_2 & 8) == 8) && ((param_1[0x24] & 4U) == 4)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    if (((uVar8 == 1) || ((param_2 & 2) == 2)) && ((param_1[0x24] & 0x20U) == 0x20)) {
      (**(code **)(*param_1 + 0x14c))();
    }
    if (uVar2 == 4) {
      if (*(char *)((int)param_1 + 0xb1) == '\0') {
        if (DAT_021d5160 <= DAT_02093c24) {
          DAT_021d5160 = DAT_02093c24 + 2;
        }
      }
      else {
        DAT_021d5160 = 0xffffffff;
      }
    }
    param_1[0x24] = param_1[0x24] | param_2;
    if (param_1[0x39] != 0) {
      uVar4 = FUN_021acab4(param_1);
      (*(code *)param_1[0x39])(uVar4,param_2);
    }
    for (uVar7 = 0; uVar7 < (uint)param_1[0x3e]; uVar7 = uVar7 + 1) {
      if (param_2 == *(uint *)(param_1[0x3d] + uVar7 * 8)) {
        FUN_021acab4(param_1);
        (**(code **)(param_1[0x3d] + uVar7 * 8 + 4))();
      }
    }
    if (param_1[0x22] != 0) {
      ALObjectImp::PostMessage(param_1,0x80011000,param_2);
    }
    if (((uVar8 == 1) || ((param_2 & 2) == 2)) && ((param_1[0x24] & 3U) == 3)) {
      (**(code **)(*param_1 + 0x13c))();
    }
    if ((int)((uint)*(byte *)((int)param_1 + 0x29) << 0x18) < 0) {
      bVar9 = false;
    }
    else {
      piVar1 = (int *)(**(code **)(*param_1 + 0x154))();
      if ((piVar1 != (int *)0x0) && ((int *)piVar1[0x25] == param_1)) {
        (**(code **)(*piVar1 + 0x130))();
      }
      if ((int *)param_1[0x36] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x36] + 300))();
      }
      uVar4 = (**(code **)(*param_1 + 0x128))();
      iVar5 = FUN_021b3f54(param_1,uVar4);
      if (uVar2 == 4) {
        iVar6 = (**(code **)(*param_1 + 0x16c))();
        if (iVar6 == 0) {
          (**(code **)(*param_1 + 0x154))();
        }
        if (((iVar5 != 0) && (iVar6 = FUN_021b3e98(param_1), iVar5 != iVar6)) &&
           (iVar5 = FUN_02023924(param_1,iVar5,0), iVar5 != 0)) {
          local_1c = 0;
          (**(code **)(*(int *)param_1[0x1a] + 0xb8))((int *)param_1[0x1a],&local_1c);
          (**(code **)(*(int *)param_1[0x1a] + 0x6c))();
        }
        (**(code **)(*param_1 + 300))();
      }
      else if ((param_2 & 0x10) == 0x10) {
        (**(code **)(*param_1 + 0xd8))(param_1,1);
        if (iVar5 == 0) {
          if (((((int *)param_1[0x27])[0x24] & 1U) == 1) &&
             ((iVar5 = (**(code **)(*(int *)param_1[0x27] + 0x17c))(), iVar5 == 0 ||
              (piVar1 = (int *)(**(code **)(*(int *)param_1[0x27] + 0x17c))(), piVar1 == param_1))))
          {
            (**(code **)(*param_1 + 0x148))(param_1,1);
          }
          iVar5 = (**(code **)(*param_1 + 0x16c))();
          if (iVar5 == 0) {
            (**(code **)(*param_1 + 0x14c))(param_1,0x10);
          }
        }
        else {
          iVar6 = FUN_021b3e98(param_1);
          if (((iVar5 != iVar6) && (iVar5 = FUN_02023924(param_1,iVar5,0), iVar5 != 0)) &&
             ((iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0xa8))(), iVar5 != 0 &&
              (iVar5 = (**(code **)(*param_1 + 0x16c))(), iVar5 == 0)))) {
            (**(code **)(*param_1 + 0x14c))(param_1,0x10);
          }
          local_20 = 0;
          (**(code **)(*(int *)param_1[0x1a] + 0xb8))((int *)param_1[0x1a],&local_20);
          (**(code **)(*(int *)param_1[0x1a] + 0x6c))();
        }
      }
      else if (uVar3 == 0x20) {
        if (iVar5 != 0) {
          iVar6 = FUN_021b3e98(param_1);
          if ((((iVar5 != iVar6) && (iVar5 = FUN_02023924(param_1,iVar5,0), iVar5 != 0)) &&
              (iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0xa8))(), iVar5 != 0)) &&
             (iVar5 = (**(code **)(*param_1 + 0x16c))(), iVar5 == 0)) {
            (**(code **)(*param_1 + 0x14c))(param_1,0x10);
          }
          local_24 = 0;
          (**(code **)(*(int *)param_1[0x1a] + 0xb8))((int *)param_1[0x1a],&local_24);
          (**(code **)(*(int *)param_1[0x1a] + 0x6c))();
        }
      }
      else if ((((uVar8 == 1) || ((param_2 & 2) == 2)) &&
               (iVar5 = (**(code **)(*param_1 + 0x154))(), iVar5 != 0)) &&
              (iVar5 = (**(code **)(*param_1 + 0x16c))(), iVar5 == 0)) {
        iVar5 = (**(code **)(*param_1 + 0x154))();
        if ((*(char *)(iVar5 + 0xb9) == '\0') && (uVar8 == 1)) {
          *(undefined1 *)(param_1 + 0x2c) = 1;
          iVar5 = (**(code **)(*param_1 + 0x154))();
          if (iVar5 != 0) {
            iVar5 = (**(code **)(*param_1 + 0x154))();
            *(int **)(iVar5 + 0x98) = param_1;
          }
        }
        else if (((param_1[0x24] & 3U) == 3) &&
                ((iVar5 = (**(code **)(*param_1 + 0x154))(), *(char *)(iVar5 + 0xb9) == '\0' &&
                 ((param_2 & 2) == 2)))) {
          *(undefined1 *)(param_1 + 0x2c) = 1;
          iVar5 = (**(code **)(*param_1 + 0x154))();
          if (iVar5 != 0) {
            iVar5 = (**(code **)(*param_1 + 0x154))();
            *(int **)(iVar5 + 0x98) = param_1;
          }
        }
        else {
          iVar5 = (**(code **)(*param_1 + 0x154))();
          if ((*(char *)(iVar5 + 0xb9) != '\0') && ((param_1[0x24] & 3U) == 3)) {
            *(undefined1 *)(param_1 + 0x2c) = 1;
            iVar5 = (**(code **)(*param_1 + 0x154))();
            if (iVar5 != 0) {
              iVar5 = (**(code **)(*param_1 + 0x154))();
              *(int **)(iVar5 + 0x98) = param_1;
            }
          }
        }
      }
    }
  }
  return bVar9;
}

