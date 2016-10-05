# thurmans_spidery_adventure
Text-based game where a player moves through a series of rooms and dimensions 
THEME

Welcome to quaint town of Tharzdale in the fine state of Shermpman, on the planet Naughtmigata, home to the best ice cream in the galaxy. You and your best friend Thurman traveled here from Earth to partake in this this exquisite dairy (or dairy analogous) concoction of wonder. But something happened. On your way to Orknog&#39;s (the ice cream shop), Thurman, as he&#39;s want to do, popped into Tharzdale&#39;s only comic shop while you decided to stay outside and grabnar-watch. When Thurman didn&#39;t come out after 10 minutes, you went in to check on him, only to watch the last hint of a portal close and hear Thurman&#39;s plea for help &quot;&lt;USERNAME&gt;, I&#39;ve wandered into an alternate timeline! The ice cream here is amazing, but it has flies in it! Flies I tell ya! Flies!&quot;. Wheeling around to the WAY TOO CALM comic store clerk, you scream &quot;Where&#39;s my buddy Thurman gone!&quot;. Without looking up from his comic (looked to be the Naughtmigata&#39;s version of Spawn), he responds &quot;Yeah. That&#39;s a &quot;thing&quot; here in Tharzdale. That portal is open at all times somewhere within the city limits. It just opens and closes randomly, though it does seem to open and close with greater frequency as certain places. Us townfolk just know not to go in, because brother, those that come back out, and not everyone does, end up seeing spiders in a whole new light&quot;. And upon that quizzical response, you ask, &quot;How do I get him back out of there?&quot; and with the same nonchalant, though slightly irritated tone the clerk responds &quot;Well I guess you&#39;ll have to go through the portal and come back out with him… Now if you&#39;re not buying anything, it&#39;s time to hit the road&quot;. And with that you were summarily kicked out (given you have no Schwankles with which to pay for anything. Never mind how you were going to buy the ice cream, you&#39;ve got a friend to save!).

You must find the portal, go through it, find Thurman, find the portal again, and get back to the non-fly ice cream version of Tharzdale as quickly as possible. There&#39;s a good chance there are giant spiders living symbiotically with the inhabitants on the other side of the portal, and an even better chance that those spiders love eating time disrupting intruders that, at a subatomic level, vibrate at a different wavelength, both pissing them off and making them incredibly hungry at the same time. Your best chance of finding the portal is going to different places in Tharzdale and asking the friendly folks where they&#39;ve seen the portal. Maybe you&#39;ll get lucky and find it randomly open at the first place you visit! Now go find Thurman!

Locations

1. Library of Sundries
2. Abandoned Studio Ghibli Theme park
3. Comic book store
4. Captain Krinkly Dar Hoof&#39;s grave
5. L.A. Fitness on Main
6. Boshemight&#39;s skate park
7. Mub scout troop 205&#39;s den house
8. The sub-basement of the Sunbrella Corp.

Player Walkthrough:

- Program execution
- Player presented with a menu
  - New game
- Player selects &quot;new game&quot;
- Player presented with game narrative
- Player proceeds via enter key
- Player presented with &quot;how to play&quot; instructions
- Player proceeds via enter key
- Player&#39;s character starts at the Mub Scout Troop 205&#39;s Den House
  - Possibly presented with ASCII visualization
- Player is presented with the options of:
  - Looking for the portal at the abandoned Studio Ghibli Theme Park
  - Looking for the portal at the library of sundries
  - Looking for the portal at the comic book store
  - Asking the troop leader for a clue
    - One of three randomly chosen responses from the troop leader will lead to the portal
- Player travels to portal site
  - If the portal is present, player enters &quot;alternate spidery universe&quot; or &quot;ASU&quot;
- Player travels to ASU non-portal site, looking for Thurman
  - If Thurman is not at non-portal site, Player is presented with a menu and proceeds
- Player can ask non-portal site character for a clue to where Thurman is
  - One of three randomly chosen responses from the character will lead to Thurman
- Player can travel to accessible portal site
  - If the portal is there AND Thurman is there, Player may escape to &quot;non spidery Tharzdale&quot; or &quot;NST&quot;
  - If the portal is there but Thurman is not, Player can escape to &quot;non spidery Tharzdale&quot;, reset the spider detection clock and start the hunt for the portal all over again. This does not reset Thurman&#39;s spider detection clock. (too complicated)
  - If the portal is there but Thurman is not, Player cannot go back through the portal without Thurman. Player travels to the next non-portal site in search for portal. Portal moves.
  - If Thurman is there but the portal is not, Player travels to next non-portal site with Thurman (Thurman will not leave Alex once he is found).
- Player travels through &quot;ASU&quot; until he collects Thurman AND finds the portal.
- Player only has so many moves before the spiders find and eat Thurman.
  - Items from both ASU and NST reset the move counter
  - Items change the location of the portal so that the player knows where to go
  - Items change the location of Thurman so the player knows where to go

Game Design

- Game does not to &quot;know&quot; where &quot;Alex&quot; is. Player &quot;is&quot; Alex
- Game only knows
  - Where portal is
  - Where Thurman is
  - What items the player has
- Locations are stored in a grid
  - Thurman is assigned a location once user is in Alternate Spidery Universe
  - Portal is assigned at runtime
  - New portal location is assigned once user &quot;goes through&quot; for the first time.

- Locations are provided a fixed location within the grid and referred-to by menus
- When the grid is initialized, the portal is randomly assigned
- Game cycles through grid of locations
  - Location is updated with alexLocation == true
- When Alex is true &amp;&amp; Thurman is true, Alex has found Thurman
  - Set alexHasThurman to true
  - Set new portal location



TEST PLAN



- WIN SEQUINCE 1, 5, 1, 4, 4, 3, 5 (obviously pretty helpful)

| # | TITLE | CONCERN | TEST | EXPECTED OUTPUT | NOTES |
| --- | --- | --- | --- | --- | --- |
| 1.1 | map | Player has no idea where he is in the board | drop in ASCII generated map | The map would look the same as in ASCII generator | Not really the case. Problem with escape characters when printing out. Probably should&#39;ve used a txt file. |
| 1.2 | movementMenu | entering a portal only happens when user inputs 5 | input 5 when not on a portal | nothing happens | Not the case. Had to account for it. |
| 1.3 | knapsack fills | what happens when the knapsack fills? | fill the knapsack till it&#39;s full and add another item | needs to recognize &quot;full state&quot; | This worked once I accounted for non-NULL states. It also became a better user experience once addressed |
| 1.4 | Magic Clock | just needed to make sure it worked | &quot;use&quot; Magic Clock | resets move counter | This worked like a charm… probably because it&#39;s an element of reused code. |
