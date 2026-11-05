
/* JUS-CLASS jus_Class_0209cac0::vfunc_60 [class-virtual] slot 60 of vtable 0209cac0 (own slot, not
   inherited) */

undefined4 jus_Class_0209cac0::vfunc_60(int *param_1,ushort param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  ushort *puVar2;
  int local_10;
  
  puVar2 = (ushort *)param_1[0x15];
  if (puVar2 == (ushort *)0x0) {
    local_10 = param_4;
    uVar1 = FUN_0201bfc0();
    return uVar1;
  }
  while( true ) {
    if (*puVar2 == 0xffff) {
      return 0;
    }
    if (puVar2[1] == param_2) break;
    puVar2 = puVar2 + 2;
  }
  local_10 = (uint)*puVar2 << 0xc;
  (**(code **)(*param_1 + 0xb8))(param_1,&local_10);
  *(ushort *)(param_1 + 0xb) = param_2;
  return 1;
}

