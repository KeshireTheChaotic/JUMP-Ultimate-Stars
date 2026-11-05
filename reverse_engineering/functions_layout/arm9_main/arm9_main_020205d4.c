
/* JUS-CLASS jus_TagALMT::vfunc_16 [class-virtual] slot 16 of vtable 02094cd4 (own slot, not
   inherited) */

int jus_TagALMT::vfunc_16(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 7) == '\x01') {
    return 0;
  }
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_2 + 7) <= iVar2) {
      return -1;
    }
    iVar1 = FUN_0201f0ec(param_2,iVar2);
    if (param_3 == *(int *)(iVar1 + 0x20)) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

