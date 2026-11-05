
/* JUS-GAME BattleMapItem::BattleMapGripLoad [source-string] __FILE__="BattleMapItem.cpp"
   __FUNCTION__="BattleMapGripLoad" lines=[2473, 2480] passed to 2 source-location call(s) */

int * BattleMapItem::BattleMapGripLoad
                (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 1) == '\0') {
    return (int *)0x0;
  }
  piVar2 = (int *)jus_AllocDebug(8,s_BattleMapItem_cpp_021725ec,s_BattleMapGripLoad_0217259c,0x9a9,
                                 param_4);
  FUN_020517fc(piVar2,0,8);
  bVar1 = *(byte *)(param_2 + 1);
  *(byte *)(piVar2 + 1) = bVar1;
  iVar3 = jus_AllocDebug((uint)bVar1 << 2,s_BattleMapItem_cpp_021725ec,s_BattleMapGripLoad_0217259c,
                         0x9b0);
  *piVar2 = iVar3;
  FUN_020517fc(iVar3,0,(uint)*(byte *)(piVar2 + 1) << 2);
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(piVar2 + 1); iVar3 = iVar3 + 1) {
    iVar5 = iVar3 * 0xc + param_2 + 4;
    iVar4 = FUN_02083624(BattleMapGripInit,iVar5,0x10000,0,0);
    FUN_02083a90();
    *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x6c) = *(undefined4 *)(param_1 + 0x20);
    FUN_021650b4(iVar4,1);
    if (iVar4 != 0) {
      FUN_0207a878(*(undefined4 *)(iVar4 + 0x14));
    }
    FUN_02023894(*(undefined4 *)(*(int *)(iVar4 + 0xc) + 4),*(byte *)(iVar5 + 8) + 0x300042,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0xc) + 4) + 0x68) + 0x6c))();
    FUN_02165d10(iVar4,1);
    *(undefined2 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x5c) + 0x3c) = 0;
    *(uint *)(*(int *)(iVar4 + 0x10) + 0x78) = *(uint *)(*(int *)(iVar4 + 0x10) + 0x78) | 0x30000;
    *(int *)(*piVar2 + iVar3 * 4) = iVar4;
  }
  return piVar2;
}

