
/* JUS-CLASS jus_Class_0209674c::vfunc_29 [class-virtual] slot 29 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_29(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  
  iVar4 = param_2 * 0xc;
  iVar5 = param_1 + iVar4;
  for (uVar6 = 1; uVar6 < *(uint *)(iVar5 + 0x10); uVar6 = uVar6 + 1) {
    local_30 = *(int *)(iVar5 + 0xc);
    puVar3 = (uint *)(uVar6 * 0xc + local_30);
    uVar1 = (uint)(byte)puVar3[1];
    bVar7 = uVar1 == 0;
    if (bVar7) {
      uVar1 = *puVar3;
    }
    bVar8 = bVar7 && uVar1 == param_3;
    if (bVar7 && uVar1 == param_3) {
      bVar8 = puVar3[2] == param_4;
    }
    if (bVar8) {
      FUN_020265bc(&local_2c,&local_30,uVar6);
      FUN_020265d0(auStack_28,param_1 + 0xc + iVar4,local_2c);
      iVar2 = *(int *)(iVar5 + 0x10);
      bVar7 = iVar2 == 1;
      if (bVar7) {
        iVar2 = **(int **)(iVar5 + 0xc);
      }
      if (bVar7 && iVar2 == 0) {
        FUN_02026180(param_1 + 0xc + iVar4);
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(1 << (param_2 & 0xff));
      }
    }
  }
  return;
}

