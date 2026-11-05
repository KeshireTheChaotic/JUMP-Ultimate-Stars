
/* JUS-CLASS jus_Class_0209b250::vfunc_28 [class-virtual] slot 28 of vtable 0209b250 (own slot, not
   inherited) */

uint jus_Class_0209b250::vfunc_28(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)FUN_0204a7f8();
  return (int)(uint)*puVar1 >> *(sbyte *)(param_1 + 0x4a) &
         0xffff >> (0x10 - *(byte *)(param_1 + 0x4b) & 0xff);
}

