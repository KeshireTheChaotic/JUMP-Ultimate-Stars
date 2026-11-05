
/* JUS-CLASS jus_Class_0209674c::vfunc_24 [class-virtual] slot 24 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_24(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  
  iVar3 = param_2 * 0xc;
  iVar4 = param_1 + iVar3;
  for (uVar5 = 1; uVar5 < *(uint *)(iVar4 + 0x10); uVar5 = uVar5 + 1) {
    local_30 = *(int *)(iVar4 + 0xc);
    piVar2 = (int *)(uVar5 * 0xc + local_30);
    if ((char)piVar2[1] != '\0') {
      iVar1 = *piVar2;
      bVar6 = iVar1 == param_3;
      if (bVar6) {
        iVar1 = piVar2[2];
      }
      if (bVar6 && iVar1 == param_4) {
        FUN_020265bc(&local_2c,&local_30,uVar5);
        FUN_020265d0(auStack_28,param_1 + 0xc + iVar3,local_2c);
        iVar1 = *(int *)(iVar4 + 0x10);
        bVar6 = iVar1 == 1;
        if (bVar6) {
          iVar1 = **(int **)(iVar4 + 0xc);
        }
        if (bVar6 && iVar1 == 0) {
          FUN_02026180(param_1 + 0xc + iVar3);
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(1 << (param_2 & 0xff));
        }
      }
    }
  }
  return;
}

