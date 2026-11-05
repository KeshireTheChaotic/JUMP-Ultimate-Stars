
/* JUS-CLASS ALMotionDynamic_021d266c::vfunc_51 [class-virtual] slot 51 of vtable 021d266c (own
   slot, not inherited) */

void ALMotionDynamic_021d266c::vfunc_51(int *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined2 *local_a4;
  int *local_a0;
  int *local_9c;
  int local_98;
  undefined2 local_94;
  undefined2 auStack_92 [63];
  
  local_a8 = param_1[7];
  FUN_021b2730(&local_cc,param_1[0x11] + 0x38,&local_a8);
  local_98 = local_cc;
  FUN_021b2764(&local_ac,param_1[0x11] + 0x38);
  if (local_98 == local_ac) {
    FUN_021b276c(&local_b0,param_1[0x11] + 0x38);
    local_98 = local_b0;
    FUN_021b2764(&local_b4,param_1[0x11] + 0x38);
    if (local_98 == local_b4) {
      return;
    }
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0xa0))();
  iVar3 = *piVar2;
  for (piVar2 = (int *)**(undefined4 **)(local_98 + 0x10);
      FUN_021b2784(&local_c8,*(undefined4 *)(local_98 + 0x10)), piVar2 != local_c8;
      piVar2 = piVar2 + 1) {
    FUN_021b2774(&local_b8,*piVar2 + 0xc);
    local_9c = local_b8;
    FUN_021b2774(&local_bc,*piVar2 + 0xc);
    local_a0 = local_bc;
    while ((FUN_021b277c(&local_c0,*piVar2 + 0xc), local_a0 != local_c0 &&
           (local_a0[3] * 0x1000 <= iVar3))) {
      local_9c = local_a0;
      FUN_021b3700(&local_a0);
    }
    puVar7 = (undefined4 *)*piVar2;
    if (puVar7[6] == 0) {
      (**(code **)(*(int *)*puVar7 + 0x24))((int *)*puVar7,puVar7[1],local_9c[4]);
    }
    else {
      uVar8 = puVar7[8];
      local_94 = (undefined2)local_9c[3];
      MIi_CpuCopy16(local_9c[4],auStack_92,uVar8);
      puVar7 = (undefined4 *)*piVar2;
      sVar1 = *(short *)(puVar7[6] + 4);
      if (sVar1 != 0) {
        iVar4 = local_9c[4];
        iVar5 = (**(code **)(*(int *)*puVar7 + 0x68))((int *)*puVar7,puVar7[1]);
        FUN_02051890(iVar4 + iVar5,puVar7[7],sVar1);
      }
      FUN_021b3700(&local_9c);
      FUN_021b277c(&local_c4,*piVar2 + 0xc);
      if (local_9c == local_c4) {
        piVar6 = (int *)*local_9c;
        if (piVar6 == (int *)0x0) {
          while (piVar6 = (int *)(local_9c[2] & 0xfffffffe), local_9c == (int *)*piVar6) {
            local_9c = piVar6;
          }
          local_9c = piVar6;
        }
        else {
          while ((int *)piVar6[1] != (int *)0x0) {
            piVar6 = (int *)piVar6[1];
          }
          local_9c = piVar6;
        }
        auStack_92[uVar8 >> 1] = 0x7fff;
        MIi_CpuCopy16(local_9c[4],auStack_92 + (uVar8 >> 1) + 1,uVar8);
      }
      else {
        auStack_92[uVar8 >> 1] = (short)local_9c[3];
        MIi_CpuCopy16(local_9c[4],auStack_92 + (uVar8 >> 1) + 1,uVar8);
      }
      local_a4 = &local_94;
      puVar7 = (undefined4 *)*piVar2;
      (**(code **)puVar7[6])(puVar7[1],param_1,*puVar7,&local_a4);
    }
  }
  *(byte *)((int)param_1 + 0x32) = *(byte *)((int)param_1 + 0x32) & 0xf7;
  return;
}

