
/* JUS-CLASS jus_Class_0209cac0::vfunc_62 [class-virtual] slot 62 of vtable 0209cac0 (own slot, not
   inherited) */

undefined4 jus_Class_0209cac0::vfunc_62(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  int local_10;
  
  puVar3 = (ushort *)param_1[0x15];
  if (puVar3 == (ushort *)0x0) {
    local_10 = param_4;
    uVar1 = FUN_0201c03c();
    return uVar1;
  }
  iVar2 = 0;
  while( true ) {
    if (*puVar3 == 0xffff) {
      return 0;
    }
    if (iVar2 == param_2) break;
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + 1;
  }
  local_10 = (uint)*puVar3 << 0xc;
  (**(code **)(*param_1 + 0xb8))(param_1,&local_10);
  *(ushort *)(param_1 + 0xb) = puVar3[1];
  return 1;
}

