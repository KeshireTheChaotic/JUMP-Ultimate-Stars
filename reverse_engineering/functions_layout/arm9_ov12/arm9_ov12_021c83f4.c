
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_37 [class-virtual] slot 37 of vtable 021d4a2c (own slot, not
   inherited) */

int ALTextDS_021d4a2c::vfunc_37(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *param_2;
      if (bVar1 == 0) {
        return iVar4;
      }
      if (((bVar1 < 0x80) || (0x9f < bVar1)) && (bVar1 < 0xe0)) break;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
      iVar4 = iVar4 + iVar2;
      param_2 = param_2 + 2;
    }
    if (bVar1 == 10) break;
    uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
    iVar4 = iVar4 + (uVar3 >> 1);
    param_2 = param_2 + 1;
  }
  return iVar4;
}

