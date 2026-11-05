
/* JUS-CLASS ALFont_021d5010::~ALFont_021d5010 [class-source-file] slot 0/1 of vtable 021d5010;
   resets vtables (destructor) */

undefined4 * ALFont_021d5010::~ALFont_021d5010(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = &vftable;
  DAT_021d52dc = DAT_021d52dc + -1;
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 0xc))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 0xc))();
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0xc))();
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0xc))();
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    FUN_0203254c(&DAT_021d52f8,param_1);
  }
  if ((int *)param_1[0x1a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1a] + 4))();
  }
  if (param_1[0x10] != 0) {
    FUN_0201b268();
  }
  if (param_1[0x15] != 0) {
    uVar5 = 0;
    do {
      FUN_021cab54(param_1[0x15] + uVar5 * 4,param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x100);
    FUN_0201b268(param_1[0x15]);
  }
  FUN_021cb80c(param_1 + 7);
  puVar4 = (undefined4 *)param_1[0xd];
  puVar1 = puVar4;
  puVar3 = puVar4;
  while (puVar2 = puVar1, puVar2 != param_1) {
    puVar3 = puVar2;
    puVar1 = (undefined4 *)puVar2[0xd];
  }
  puVar3[0xd] = puVar4;
  FUN_0201b268(param_1[7]);
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  return param_1;
}

