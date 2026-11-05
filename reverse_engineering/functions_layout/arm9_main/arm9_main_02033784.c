
/* JUS-CLASS jus_TagDUMY::~jus_TagDUMY [class-type-tag] slot 0/1 of vtable 02094b0c; resets vtables
   (destructor) */

undefined4 * jus_TagDUMY::~jus_TagDUMY(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = &DAT_020a0c34;
  *param_1 = &vftable;
  DAT_020a0fe4 = DAT_020a0fe4 + -1;
  iVar3 = param_1[8];
  if (iVar3 != 0) {
    puVar1 = (undefined *)(uint)*(byte *)((int)param_1 + 0x1b);
  }
  if ((iVar3 != 0 && puVar1 != (undefined *)0x0) && (iVar2 = FUN_0201a9ec(iVar3), iVar2 == 0)) {
    FUN_0201a958(iVar3,1);
  }
  iVar3 = param_1[4];
  if ((iVar3 != 0) && (iVar2 = FUN_0201a9ec(iVar3), iVar2 == 0)) {
    FUN_0201a958(iVar3,1);
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0x24))();
  }
  return param_1;
}

