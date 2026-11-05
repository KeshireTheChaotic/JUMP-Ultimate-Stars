
/* JUS-CLASS jus_Class_0209cac0::vfunc_50 [class-virtual] slot 50 of vtable 0209cac0 (own slot, not
   inherited) */

int jus_Class_0209cac0::vfunc_50
              (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar2 = FUN_0201bdec();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = param_1[0x15];
  }
  if (iVar2 != 0 && iVar3 != 0) {
    puVar6 = (undefined2 *)param_1[0x16];
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0xa0))();
    local_18 = *puVar4;
    iVar3 = FUN_02016314(&local_18,*puVar6);
    while (iVar3 != 0) {
      puVar6 = puVar6 + -2;
      iVar3 = FUN_02016314(&local_18,*puVar6);
    }
    iVar3 = FUN_02016328(puVar6[2],&local_18);
    while (iVar3 != 0) {
      iVar3 = FUN_02016328(puVar6[4],&local_18);
      puVar6 = puVar6 + 2;
    }
    uVar1 = puVar6[1];
    if ((*(ushort *)((int)param_1 + 0x2e) != uVar1) && ((uVar1 & 0xfff0) == 0xff80)) {
      if ((*(byte *)((int)param_1 + 0x32) & 7) >> 2 == 0) {
        uVar8 = FUN_0201e5d8(param_1 + 0xe,(short)param_1[0xc]);
        iVar5 = (int)((ulonglong)uVar8 >> 0x20);
        bVar7 = (int)uVar8 != 0;
        iVar3 = 0;
        if (bVar7) {
          iVar5 = param_1[0xe];
          iVar3 = param_1[0xf];
        }
        if ((bVar7 && iVar5 != iVar3) && (iVar3 = (**(code **)(*param_1 + 0x68))(), iVar3 != 0)) {
          (**(code **)(*param_1 + 0x6c))();
        }
        (**(code **)(*param_1 + 0xec))(param_1,uVar1 & 0xf | 0xff00);
        *(ushort *)((int)param_1 + 0x2e) = uVar1;
        (**(code **)(*param_1 + 0xcc))();
      }
      else {
        *(byte *)((int)param_1 + 0x32) = *(byte *)((int)param_1 + 0x32) & 0xfb;
      }
    }
  }
  return iVar2;
}

