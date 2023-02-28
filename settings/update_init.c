...
  rand = Math.RandomFloatInclusive( 0.0, 1.0 );
	if ( rand < 0.35 )
		itemEnt = player.GetInventory().CreateInInventory( "Apple" );
	else if ( rand > 0.65 )
		itemEnt = player.GetInventory().CreateInInventory( "Pear" );
	else
		itemEnt = player.GetInventory().CreateInInventory( "Plum" );

	itemEnt = player.GetInventory().CreateInInventory( "StoneKnife" );

	SetRandomHealth( itemEnt );
...
