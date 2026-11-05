
int * FUN_02020aa0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = jus_AllocDebug(0xac);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)ALWidgetBase_0209c1e0_Derived_0209c580::ALWidgetBase_0209c1e0_Derived_0209c580()
    ;
  }
  (**(code **)(*piVar2 + 0x124))();
  piVar2[0x2a] = param_1;
  (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
  return piVar2;
}

