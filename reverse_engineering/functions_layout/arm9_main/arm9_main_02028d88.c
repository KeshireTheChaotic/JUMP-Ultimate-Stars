
/* JUS-CLASS BattleAI::~BattleAI [class-source-file] slot 0/1 of vtable 02094864; resets vtables
   (destructor) */

undefined4 * BattleAI::~BattleAI(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_r4;
  
  *param_1 = &vftable;
  puVar2 = (undefined4 *)param_1[0x37];
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    unaff_r4 = param_1[0x37];
  }
  if (puVar2 != (undefined4 *)0x0 && unaff_r4 != 0) {
    FUN_020288e8(unaff_r4);
    iVar1 = FUN_0201a9ec(unaff_r4);
    if (iVar1 == 0) {
      FUN_0201a958(unaff_r4,1);
    }
  }
  FUN_0204c2c8(param_1 + 0x34);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

