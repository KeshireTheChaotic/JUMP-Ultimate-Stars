
/* JUS-CLASS jus_Class_0209cac0::vfunc_44 [class-virtual] slot 44 of vtable 0209cac0 (own slot, not
   inherited) */

void jus_Class_0209cac0::vfunc_44(int *param_1,int *param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_30;
  int local_2c;
  
  iVar1 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar3 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar4 = (**(code **)(*param_2 + 0x28))();
  iVar3 = iVar3 + iVar4;
  local_2c = 0;
  local_30 = 0;
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar1 + iVar2 + 7); iVar4 = iVar4 + 1) {
    pcVar5 = (char *)FUN_0201f0ec(iVar3,iVar4);
    iVar8 = *(int *)(pcVar5 + 0x20);
    if ((*(byte *)(iVar1 + iVar2 + 5) & 1) == 0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar5 = (char *)FUN_0201f0ec(iVar3,iVar4);
      pcVar9 = pcVar5;
    }
    if (iVar8 == 0) {
      iVar8 = param_3;
    }
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)(int)*pcVar9;
    }
    if (pcVar9 == (char *)0x0 || pcVar5 == (char *)0x0) {
      pcVar9 = param_4;
    }
    iVar6 = jus_AllocDebug(0x38);
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = jus_TagALMT::jus_TagALMT
                        (iVar6,param_2,
                         *(int *)(iVar3 + (uint)*(byte *)(iVar3 + 6) * 4 + iVar4 * 4 + 0xc) + -0x20,
                         iVar8,iVar4,pcVar9);
    }
    if (iVar4 == 0) {
      param_1[0x11] = iVar7;
    }
    FUN_020324dc(&DAT_020a1d10,iVar7);
    if (iVar4 == 0) {
      param_1[0x11] = iVar7;
      local_2c = iVar7;
    }
    else {
      *(int *)(iVar7 + 0x1c) = local_2c;
      *(int *)(local_30 + 0x20) = iVar7;
    }
    local_30 = iVar7;
  }
  (**(code **)(*param_1 + 0x150))();
  if (-1 < param_5) {
    (**(code **)(*param_1 + 0xd4))();
  }
  return;
}

