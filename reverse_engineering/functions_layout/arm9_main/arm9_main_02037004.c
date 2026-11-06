
/* JUS-CLASS ScreenInstance_Derived_02093d14::vfunc_53 [class-virtual] slot 53 of vtable 02093d14
   (own slot, not inherited) */

void ScreenInstance_Derived_02093d14::vfunc_53
               (undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_50 [7];
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined1 auStack_34 [7];
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar1 = iVar1 + iVar2;
  piVar3 = *(int **)(param_2 + 100);
  if (*(char *)(iVar1 + 6) == '\x01') {
    iVar2 = (**(code **)(*piVar3 + 0xc4))();
    if (iVar2 != iRam020371cc) {
      iVar2 = FUN_0201a228(0x78);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)ScreenInstance_Derived_02093d14_Part_0209b330::
                        ScreenInstance_Derived_02093d14_Part_0209b330(iVar2,param_2);
      }
      FUN_0202201c(param_2,piVar3);
    }
    uStack_2c = 0;
    uStack_2b = 8;
    uStack_2a = 0;
    uStack_29 = 0;
    uStack_28 = 8;
    uStack_27 = 8;
    uStack_24 = 8;
    uStack_22 = 8;
    uStack_2d = 1;
    uStack_20 = *(undefined2 *)(iVar1 + 0x10);
    uStack_1e = *(undefined2 *)(iVar1 + 0x12);
    (**(code **)(*piVar3 + 200))(piVar3,auStack_34);
  }
  else if (*(char *)(iVar1 + 6) == '\x02') {
    iVar2 = (**(code **)(*piVar3 + 0xc4))();
    if (iVar2 != iRam020371d0) {
      iVar2 = FUN_0201a228(0x78);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)ScreenInstance_Derived_02093d14_Part_0209b250::
                        ScreenInstance_Derived_02093d14_Part_0209b250(iVar2,param_2);
      }
      FUN_0202201c(param_2,piVar3);
    }
    uStack_43 = 0xb;
    uStack_49 = 2;
    uStack_48 = 0;
    uStack_47 = 10;
    uStack_46 = 0xc;
    uStack_44 = 10;
    uStack_40 = 8;
    uStack_3e = 8;
    uStack_45 = 4;
    uStack_3c = *(undefined2 *)(iVar1 + 0x10);
    uStack_3a = *(undefined2 *)(iVar1 + 0x12);
    (**(code **)(*piVar3 + 200))(piVar3,auStack_50);
  }
  (**(code **)(*piVar3 + 0xcc))(piVar3,param_3);
  (**(code **)(*piVar3 + 0xd0))(piVar3,iVar1 + 0x18);
  return;
}

