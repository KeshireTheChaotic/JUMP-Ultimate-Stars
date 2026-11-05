
/* JUS-GAME ALWidgetBase::DoInit [source-string] __FILE__="ALWidgetBase.cpp" __FUNCTION__="DoInit"
   lines=[3592, 3605] passed to 2 source-location call(s) */

void ALWidgetBase::DoInit(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined1 auStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80 [2];
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60 [2];
  undefined1 auStack_58 [8];
  int local_50 [3];
  int local_44;
  int local_40 [3];
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  int local_18;
  
  piVar1 = (int *)FUN_021acab4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  iVar2 = (**(code **)(*piVar1 + 0x34))();
  if (iVar2 != 0x55424457) {
    FUN_0202b3c8(0x40);
    iVar2 = FUN_021acab4();
    FUN_021b87e0(param_1,iVar2);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 100) + 100))();
    iVar3 = FUN_021acab4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
    iVar3 = *(int *)(iVar3 + 4);
    uVar6 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
    if ((uVar6 & 1) == 0) {
      if (uVar6 != 0) {
        local_18 = ((int)*(short *)(iVar3 + 0xcc) - *(int *)(*(int *)(param_1 + 4) + 0x94)) * 0x1000
        ;
        FUN_021b956c(param_1,&local_18);
      }
      local_40[2] = (int)*(short *)(iVar3 + 0xce) << 0xc;
      local_34 = 0;
      FUN_021b0ef8(auStack_30,&local_34,local_40 + 2);
      local_28 = 0;
      local_24 = 0;
      FUN_021b0ef8(auStack_20,&local_24,&local_28);
      FUN_0202b8d0(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),auStack_20,auStack_30,&DAT_02093d5c,
                   &DAT_02093d5c,&DAT_02093c2c,&DAT_02093c2c);
      local_50[2] = *(int *)(*(int *)(param_1 + 4) + 0x94) * 0x1000 + -0x1000;
      local_44 = (int)*(short *)(iVar3 + 0xce) << 0xc;
      local_40[0] = *(int *)(*(int *)(param_1 + 4) + 0x94) * 0x1000 + -0x1000;
      local_40[1] = 0;
      FUN_0202b8d0(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),local_40,local_50 + 2,&DAT_02093d5c,
                   &DAT_02093d5c,&DAT_02093c2c,&DAT_02093c2c);
      local_64 = *(int *)(*(int *)(param_1 + 4) + 0x94) * 0x1000;
      local_68 = local_64 + -0x1000;
      local_60[0] = *(int *)(*(int *)(param_1 + 4) + 0x94) << 0xc;
      local_60[1] = 0;
      FUN_021b0ef8(auStack_58,local_60 + 1,local_60);
      local_50[0] = (*(uint *)(*(int *)(param_1 + 4) + 0x94) >> 1) * 0x1000;
      local_50[1] = 0;
      FUN_0202beec(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),local_50,auStack_58,&local_68,
                   &DAT_02093d5c,&DAT_02093d5c,&DAT_02093d5c,&DAT_02093c2c,&DAT_02093c2c,
                   &DAT_02093c2c);
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x94);
      local_84 = (*(short *)(iVar3 + 0xce) - iVar5) * 0x1000;
      local_88 = iVar5 * 0x1000 + -0x1000;
      local_80[0] = ((int)*(short *)(iVar3 + 0xce) - *(int *)(*(int *)(param_1 + 4) + 0x94)) *
                    0x1000;
      local_80[1] = 0;
      FUN_021b0ef8(auStack_78,local_80 + 1,local_80);
      local_6c = (int)*(short *)(iVar3 + 0xce) << 0xc;
      local_70 = (*(uint *)(*(int *)(param_1 + 4) + 0x94) >> 1) * 0x1000;
      FUN_0202beec(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),&local_70,auStack_78,&local_88,
                   &DAT_02093d5c,&DAT_02093d5c,&DAT_02093d5c,&DAT_02093c2c,&DAT_02093c2c,
                   &DAT_02093c2c);
      FUN_021b85ec(auStack_90,0,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x94),
                   (int)*(short *)(iVar3 + 0xce));
      uVar4 = FUN_021b9588(0,auStack_90,&DAT_02093c8c);
      FUN_02020e98(param_1,uVar4);
      iVar5 = jus_AllocDebug(0xc,s_ALWidgetBase_cpp_021d3de8,s_DoInit_021d3b50,0xe08);
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = ALWidgetBase_021d2c2c::ALWidgetBase_021d2c2c
                          (iVar5,param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x94),0);
      }
      FUN_021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar3 + 4));
    }
    else {
      local_b0 = 0;
      local_ac = (int)*(short *)(iVar3 + 0xcc) << 0xc;
      FUN_021b0ef8(auStack_a8,&local_ac,&local_b0);
      local_9c = 0;
      local_a0 = 0;
      FUN_021b0ef8(auStack_98,&local_9c,&local_a0);
      FUN_0202b8d0(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),auStack_98,auStack_a8,&DAT_02093d5c,
                   &DAT_02093d5c,&DAT_02093c2c,&DAT_02093c2c);
      local_c0 = (int)*(short *)(iVar3 + 0xcc) << 0xc;
      local_bc = *(int *)(*(int *)(param_1 + 4) + 0x98) * 0x1000 + -0x1000;
      local_b8 = 0;
      local_b4 = *(int *)(*(int *)(param_1 + 4) + 0x98) * 0x1000 + -0x1000;
      FUN_0202b8d0(*(undefined4 *)(*(int *)(iVar2 + 4) + 100),&local_b8,&local_c0,&DAT_02093d5c,
                   &DAT_02093d5c,&DAT_02093c2c,&DAT_02093c2c);
      iVar5 = jus_AllocDebug(0xc,s_ALWidgetBase_cpp_021d3de8,s_DoInit_021d3b50,0xe15);
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = ALWidgetBase_021d2c2c::ALWidgetBase_021d2c2c
                          (iVar5,param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x98),1);
      }
      FUN_021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar3 + 4));
    }
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 100) + 0x68))();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  }
  return;
}

