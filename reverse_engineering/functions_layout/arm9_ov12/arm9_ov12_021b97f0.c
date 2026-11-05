
/* JUS-CLASS ALWidgetBase_021d2c2c::vfunc_24 [class-virtual] slot 24 of vtable 021d2c2c (own slot,
   not inherited) */

void ALWidgetBase_021d2c2c::vfunc_24
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_64 [8];
  int local_5c;
  int local_58 [3];
  undefined1 auStack_4c [8];
  int local_44;
  int local_40 [3];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0202b3c8(0x40);
    uVar1 = FUN_021acab4();
    *(undefined4 *)(param_1 + 8) = uVar1;
    FUN_021b87e0(param_1,*(undefined4 *)(param_1 + 8));
    piVar2 = *(int **)(*(int *)(param_1 + 8) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    iVar3 = FUN_021b9588(0,DAT_02093bd0,&DAT_02093c8c);
    FUN_02020e98(param_1,iVar3);
  }
  else {
    iVar3 = FUN_02020ed0(param_1,0);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = param_2;
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 0x60))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 100))();
  iVar4 = *(int *)(param_1 + 4);
  if (*(char *)(iVar4 + 0x9c) == '\0') {
    local_44 = *(int *)(iVar4 + 0x98) << 0xc;
    local_40[0] = (*(int *)(*(int *)(param_1 + 4) + 0x94) + -2) * 0x1000;
    local_40[1] = 0;
    local_40[2] = 0x2000;
    FUN_021b8818(auStack_24,local_40 + 2,local_40 + 1,local_40,&local_44);
    FUN_0202b9e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 100),1,auStack_24,
                 &DAT_02093d5c,&DAT_02093dac);
    FUN_021b85ec(auStack_4c,0,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x94),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x98));
    (**(code **)(**(int **)(iVar3 + 4) + 0x68))(*(int **)(iVar3 + 4),auStack_4c);
  }
  else {
    local_5c = (*(int *)(iVar4 + 0x94) + -2) * 0x1000;
    local_58[0] = *(int *)(*(int *)(param_1 + 4) + 0x98) << 0xc;
    local_58[1] = 0x2000;
    local_58[2] = 0;
    FUN_021b8818(auStack_34,local_58 + 2,local_58 + 1,local_58,&local_5c);
    FUN_0202b9e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 100),1,auStack_34,
                 &DAT_02093d5c,&DAT_02093dac);
    FUN_021b85ec(auStack_64,0,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x98),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x94));
    (**(code **)(**(int **)(iVar3 + 4) + 0x68))(*(int **)(iVar3 + 4),auStack_64);
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 0x68))();
  return;
}

