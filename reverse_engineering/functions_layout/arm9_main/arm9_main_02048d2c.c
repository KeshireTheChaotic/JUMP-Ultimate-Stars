
/* JUS-CLASS VertexBuffer::vfunc_05 [class-virtual] slot 5 of vtable 0209b0c8 (own slot, not
   inherited) */

void VertexBuffer::vfunc_05(int param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  
  uVar8 = param_4;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar5 = param_5[1];
    iVar6 = *param_5;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x20))();
    iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x24))();
    FUN_02066178(param_1 + 0x3c,iVar6 * iVar1,iVar5 * iVar2);
  }
  param_4 = param_4 & 0x7fff;
  uVar3 = param_4 << 0x10;
  bVar7 = *(int *)(param_1 + 0x14) == 0;
  if (bVar7) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar4 = 1;
  if (bVar7) {
    uVar3 = uVar3 & 1;
  }
  if (bVar7 && uVar3 == 1) {
    uVar4 = 2;
  }
  if ((*(int *)(param_1 + 0x14) == 1) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar4 = 2;
  }
  for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    switch(*(undefined4 *)(param_1 + 8)) {
    case 0:
      FUN_02066124(param_1 + 0x3c,(*param_2 << 10) >> 0x10,(param_2[1] << 10) >> 0x10);
      break;
    case 1:
      FUN_020661a8(param_1 + 0x3c,param_4);
      FUN_02066124(param_1 + 0x3c,(*param_2 << 10) >> 0x10,(param_2[1] << 10) >> 0x10);
      break;
    case 2:
      FUN_0206614c(param_1 + 0x3c,(int)(short)*param_2,(int)(short)param_2[1],(int)(short)param_2[2]
                   ,uVar8);
      break;
    case 3:
      FUN_020661a8(param_1 + 0x3c,param_4);
      FUN_0206614c(param_1 + 0x3c,(int)(short)*param_2,(int)(short)param_2[1],(int)(short)param_2[2]
                  );
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

